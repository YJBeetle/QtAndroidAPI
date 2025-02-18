#pragma once

#include "../../../JIntArray.hpp"
#include "../Bitmap.def.hpp"
#include "../Matrix.def.hpp"
#include "../Rect.def.hpp"
#include "./PdfRenderer.def.hpp"
#include "./RenderParams.def.hpp"
#include "./models/FormEditRecord.def.hpp"
#include "./models/FormWidgetInfo.def.hpp"
#include "./models/selection/PageSelection.def.hpp"
#include "./models/selection/SelectionBoundary.def.hpp"
#include "../../../JString.hpp"
#include "./PdfRenderer_Page.def.hpp"

namespace android::graphics::pdf
{
	// Fields
	inline jint PdfRenderer_Page::RENDER_MODE_FOR_DISPLAY()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer$Page",
			"RENDER_MODE_FOR_DISPLAY"
		);
	}
	inline jint PdfRenderer_Page::RENDER_MODE_FOR_PRINT()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer$Page",
			"RENDER_MODE_FOR_PRINT"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject PdfRenderer_Page::applyEdit(android::graphics::pdf::models::FormEditRecord arg0) const
	{
		return callObjectMethod(
			"applyEdit",
			"(Landroid/graphics/pdf/models/FormEditRecord;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline void PdfRenderer_Page::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::graphics::pdf::models::FormWidgetInfo PdfRenderer_Page::getFormWidgetInfoAtIndex(jint arg0) const
	{
		return callObjectMethod(
			"getFormWidgetInfoAtIndex",
			"(I)Landroid/graphics/pdf/models/FormWidgetInfo;",
			arg0
		);
	}
	inline android::graphics::pdf::models::FormWidgetInfo PdfRenderer_Page::getFormWidgetInfoAtPosition(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getFormWidgetInfoAtPosition",
			"(II)Landroid/graphics/pdf/models/FormWidgetInfo;",
			arg0,
			arg1
		);
	}
	inline JObject PdfRenderer_Page::getFormWidgetInfos() const
	{
		return callObjectMethod(
			"getFormWidgetInfos",
			"()Ljava/util/List;"
		);
	}
	inline JObject PdfRenderer_Page::getFormWidgetInfos(JIntArray arg0) const
	{
		return callObjectMethod(
			"getFormWidgetInfos",
			"([I)Ljava/util/List;",
			arg0.object<jintArray>()
		);
	}
	inline JObject PdfRenderer_Page::getGotoLinks() const
	{
		return callObjectMethod(
			"getGotoLinks",
			"()Ljava/util/List;"
		);
	}
	inline jint PdfRenderer_Page::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline JObject PdfRenderer_Page::getImageContents() const
	{
		return callObjectMethod(
			"getImageContents",
			"()Ljava/util/List;"
		);
	}
	inline jint PdfRenderer_Page::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline JObject PdfRenderer_Page::getLinkContents() const
	{
		return callObjectMethod(
			"getLinkContents",
			"()Ljava/util/List;"
		);
	}
	inline JObject PdfRenderer_Page::getTextContents() const
	{
		return callObjectMethod(
			"getTextContents",
			"()Ljava/util/List;"
		);
	}
	inline jint PdfRenderer_Page::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline void PdfRenderer_Page::render(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Matrix arg2, android::graphics::pdf::RenderParams arg3) const
	{
		callMethod<void>(
			"render",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/Matrix;Landroid/graphics/pdf/RenderParams;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void PdfRenderer_Page::render(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Matrix arg2, jint arg3) const
	{
		callMethod<void>(
			"render",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/Matrix;I)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	inline JObject PdfRenderer_Page::searchText(JString arg0) const
	{
		return callObjectMethod(
			"searchText",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	inline android::graphics::pdf::models::selection::PageSelection PdfRenderer_Page::selectContent(android::graphics::pdf::models::selection::SelectionBoundary arg0, android::graphics::pdf::models::selection::SelectionBoundary arg1) const
	{
		return callObjectMethod(
			"selectContent",
			"(Landroid/graphics/pdf/models/selection/SelectionBoundary;Landroid/graphics/pdf/models/selection/SelectionBoundary;)Landroid/graphics/pdf/models/selection/PageSelection;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::graphics::pdf

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::pdf;
#endif
