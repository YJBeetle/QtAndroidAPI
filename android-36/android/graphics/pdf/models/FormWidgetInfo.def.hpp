#pragma once

#include "../../../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::graphics::pdf::models
{
	class FormWidgetInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint WIDGET_TYPE_CHECKBOX();
		static jint WIDGET_TYPE_COMBOBOX();
		static jint WIDGET_TYPE_LISTBOX();
		static jint WIDGET_TYPE_PUSHBUTTON();
		static jint WIDGET_TYPE_RADIOBUTTON();
		static jint WIDGET_TYPE_SIGNATURE();
		static jint WIDGET_TYPE_TEXTFIELD();
		static jint WIDGET_TYPE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit FormWidgetInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FormWidgetInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getAccessibilityLabel() const;
		jfloat getFontSize() const;
		JObject getListItems() const;
		jint getMaxLength() const;
		JString getTextValue() const;
		jint getWidgetIndex() const;
		android::graphics::Rect getWidgetRect() const;
		jint getWidgetType() const;
		jint hashCode() const;
		jboolean isEditableText() const;
		jboolean isMultiLineText() const;
		jboolean isMultiSelect() const;
		jboolean isReadOnly() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics::pdf::models

