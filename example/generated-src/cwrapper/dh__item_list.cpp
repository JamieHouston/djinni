// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "item_list.hpp"

#include "dh__item_list.hpp"
#include "dh__list_string.hpp"

static void(*s_py_callback_item_list___delete)(DjinniRecordHandle * );
void item_list_add_callback___delete(void(* ptr)(DjinniRecordHandle * )) {
    s_py_callback_item_list___delete = ptr;
}

void item_list___delete(DjinniRecordHandle * drh) {
    s_py_callback_item_list___delete(drh);
}
void optional_item_list___delete(DjinniOptionalRecordHandle * drh) {
    s_py_callback_item_list___delete((DjinniRecordHandle *) drh); // can't static cast, find better way
}
static DjinniObjectHandle * ( * s_py_callback_item_list_get_item_list_f1)(DjinniRecordHandle *);

void item_list_add_callback_get_item_list_f1(DjinniObjectHandle *( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_item_list_get_item_list_f1 = ptr;
}

static DjinniRecordHandle * ( * s_py_callback_item_list_python_create_item_list)(DjinniObjectHandle *);

void item_list_add_callback_python_create_item_list(DjinniRecordHandle *( * ptr)(DjinniObjectHandle *)) {
    s_py_callback_item_list_python_create_item_list = ptr;
}

djinni::Handle<DjinniRecordHandle> DjinniItemList::fromCpp(const ::textsort::ItemList& dr) {
    auto  _field_items = DjinniListString::fromCpp(dr.items);

    djinni::Handle<DjinniRecordHandle> _aux(
        s_py_callback_item_list_python_create_item_list(
            _field_items.release()),
        item_list___delete);
    return _aux;
}

::textsort::ItemList DjinniItemList::toCpp(djinni::Handle<DjinniRecordHandle> dh) {
    djinni::Handle<DjinniObjectHandle> _field_items(s_py_callback_item_list_get_item_list_f1(dh.get()), list_string___delete);

    auto _aux = ::textsort::ItemList(
        DjinniListString::toCpp(std::move( _field_items)));
    return _aux;
}

djinni::Handle<DjinniOptionalRecordHandle> DjinniItemList::fromCpp(std::experimental::optional<::textsort::ItemList> dc) {
    if (dc == std::experimental::nullopt) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(DjinniItemList::fromCpp(std::move(* dc)), optional_item_list___delete);
}

std::experimental::optional<::textsort::ItemList>DjinniItemList::toCpp(djinni::Handle<DjinniOptionalRecordHandle> dh) {
     if (dh) {
        return std::experimental::optional<::textsort::ItemList>(DjinniItemList::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), item_list___delete)));
    }
    return std::experimental::nullopt;
}
