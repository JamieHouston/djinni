#include "Translation.h"
#include <codecvt>

namespace System {

    std::wstring utf8_to_unicode(const std::string& text) {
        try {
            std::wstring_convert<std::codecvt_utf8<wchar_t>> convt;
            return convt.from_bytes(text);
        }
        catch (std::range_error&)
        {
            std::wstring wtext;
            for (auto& c : text)
                wtext += wchar_t(c);
            return wtext;
        }
    }

    std::string unicode_to_utf8(const std::wstring& text) {
        std::wstring_convert<std::codecvt_utf8<wchar_t>> convt;
        return convt.to_bytes(text);
    }

    std::string convertToSTDString(Platform::String^ str) {
        return unicode_to_utf8(std::wstring(str->Begin(), str->End()));
    }

    Platform::String^ convertToPlatformString(const std::string& str) {
        return ref new Platform::String(utf8_to_unicode(str).c_str());
    }

}




