#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Matrix;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics::pdf
{
	class PdfRendererPreV;
}
namespace android::graphics::pdf
{
	class RenderParams;
}
namespace android::graphics::pdf::models
{
	class FormEditRecord;
}
namespace android::graphics::pdf::models
{
	class FormWidgetInfo;
}
namespace android::graphics::pdf::models::selection
{
	class PageSelection;
}
namespace android::graphics::pdf::models::selection
{
	class SelectionBoundary;
}
class JString;

namespace android::graphics::pdf
{
	class PdfRendererPreV_Page : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PdfRendererPreV_Page(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfRendererPreV_Page(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject applyEdit(android::graphics::pdf::models::FormEditRecord arg0) const;
		void close() const;
		android::graphics::pdf::models::FormWidgetInfo getFormWidgetInfoAtIndex(jint arg0) const;
		android::graphics::pdf::models::FormWidgetInfo getFormWidgetInfoAtPosition(jint arg0, jint arg1) const;
		JObject getFormWidgetInfos() const;
		JObject getFormWidgetInfos(JIntArray arg0) const;
		JObject getGotoLinks() const;
		jint getHeight() const;
		JObject getImageContents() const;
		jint getIndex() const;
		JObject getLinkContents() const;
		JObject getTextContents() const;
		jint getWidth() const;
		void render(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Matrix arg2, android::graphics::pdf::RenderParams arg3) const;
		JObject searchText(JString arg0) const;
		android::graphics::pdf::models::selection::PageSelection selectContent(android::graphics::pdf::models::selection::SelectionBoundary arg0, android::graphics::pdf::models::selection::SelectionBoundary arg1) const;
	};
} // namespace android::graphics::pdf

