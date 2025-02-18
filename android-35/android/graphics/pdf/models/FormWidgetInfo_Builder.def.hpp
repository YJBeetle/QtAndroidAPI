#pragma once

#include "../../../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::graphics::pdf::models
{
	class FormWidgetInfo;
}
class JString;

namespace android::graphics::pdf::models
{
	class FormWidgetInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FormWidgetInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FormWidgetInfo_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FormWidgetInfo_Builder(jint arg0, jint arg1, android::graphics::Rect arg2, JString arg3, JString arg4);
		
		// Methods
		android::graphics::pdf::models::FormWidgetInfo build() const;
		android::graphics::pdf::models::FormWidgetInfo_Builder setEditableText(jboolean arg0) const;
		android::graphics::pdf::models::FormWidgetInfo_Builder setFontSize(jfloat arg0) const;
		android::graphics::pdf::models::FormWidgetInfo_Builder setListItems(JObject arg0) const;
		android::graphics::pdf::models::FormWidgetInfo_Builder setMaxLength(jint arg0) const;
		android::graphics::pdf::models::FormWidgetInfo_Builder setMultiLineText(jboolean arg0) const;
		android::graphics::pdf::models::FormWidgetInfo_Builder setMultiSelect(jboolean arg0) const;
		android::graphics::pdf::models::FormWidgetInfo_Builder setReadOnly(jboolean arg0) const;
	};
} // namespace android::graphics::pdf::models

