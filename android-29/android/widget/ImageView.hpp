#pragma once

#ifndef ANDROID_WIDGET_IMAGEVIEW
#define ANDROID_WIDGET_IMAGEVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::graphics
{
	class PorterDuff_Mode;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::widget
{
	class ImageView_ScaleType;
}
namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::graphics
{
	class ColorFilter;
}

namespace __jni_impl::android::widget
{
	class ImageView : public __jni_impl::android::view::View
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jboolean isOpaque();
		void setMaxHeight(jint arg0);
		jint getMaxHeight();
		void setMaxWidth(jint arg0);
		jint getMaxWidth();
		void setAlpha(jint arg0);
		void clearColorFilter();
		QAndroidJniObject getAccessibilityClassName();
		void jumpDrawablesToCurrentState();
		QAndroidJniObject onCreateDrawableState(jint arg0);
		void setVisibility(jint arg0);
		void onVisibilityAggregated(jboolean arg0);
		jboolean hasOverlappingRendering();
		void onRtlPropertiesChanged(jint arg0);
		void invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		void setSelected(jboolean arg0);
		jint getBaseline();
		jboolean getAdjustViewBounds();
		void setAdjustViewBounds(jboolean arg0);
		void setImageResource(jint arg0);
		void setImageURI(__jni_impl::android::net::Uri arg0);
		void setImageDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setImageIcon(__jni_impl::android::graphics::drawable::Icon arg0);
		void setImageTintList(__jni_impl::android::content::res::ColorStateList arg0);
		QAndroidJniObject getImageTintList();
		void setImageTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setImageTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		QAndroidJniObject getImageTintMode();
		QAndroidJniObject getImageTintBlendMode();
		void setImageBitmap(__jni_impl::android::graphics::Bitmap arg0);
		void setImageState(jintArray arg0, jboolean arg1);
		void setImageLevel(jint arg0);
		void setScaleType(__jni_impl::android::widget::ImageView_ScaleType arg0);
		QAndroidJniObject getScaleType();
		QAndroidJniObject getImageMatrix();
		void setImageMatrix(__jni_impl::android::graphics::Matrix arg0);
		jboolean getCropToPadding();
		void setCropToPadding(jboolean arg0);
		void animateTransform(__jni_impl::android::graphics::Matrix arg0);
		void setBaseline(jint arg0);
		void setBaselineAlignBottom(jboolean arg0);
		jboolean getBaselineAlignBottom();
		jint getImageAlpha();
		void setImageAlpha(jint arg0);
		QAndroidJniObject getDrawable();
		QAndroidJniObject getColorFilter();
		void setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
		void setColorFilter(jint arg0);
		void setColorFilter(jint arg0, __jni_impl::android::graphics::PorterDuff_Mode arg1);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../net/Uri.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Bitmap.hpp"
#include "ImageView_ScaleType.hpp"
#include "../graphics/Matrix.hpp"
#include "../graphics/ColorFilter.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ImageView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void ImageView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void ImageView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ImageView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean ImageView::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z");
	}
	void ImageView::setMaxHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxHeight",
			"(I)V",
			arg0);
	}
	jint ImageView::getMaxHeight()
	{
		return __thiz.callMethod<jint>(
			"getMaxHeight",
			"()I");
	}
	void ImageView::setMaxWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxWidth",
			"(I)V",
			arg0);
	}
	jint ImageView::getMaxWidth()
	{
		return __thiz.callMethod<jint>(
			"getMaxWidth",
			"()I");
	}
	void ImageView::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0);
	}
	void ImageView::clearColorFilter()
	{
		__thiz.callMethod<void>(
			"clearColorFilter",
			"()V");
	}
	QAndroidJniObject ImageView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void ImageView::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V");
	}
	QAndroidJniObject ImageView::onCreateDrawableState(jint arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateDrawableState",
			"(I)[I",
			arg0);
	}
	void ImageView::setVisibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0);
	}
	void ImageView::onVisibilityAggregated(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0);
	}
	jboolean ImageView::hasOverlappingRendering()
	{
		return __thiz.callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z");
	}
	void ImageView::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0);
	}
	void ImageView::invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void ImageView::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1);
	}
	void ImageView::setSelected(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0);
	}
	jint ImageView::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I");
	}
	jboolean ImageView::getAdjustViewBounds()
	{
		return __thiz.callMethod<jboolean>(
			"getAdjustViewBounds",
			"()Z");
	}
	void ImageView::setAdjustViewBounds(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAdjustViewBounds",
			"(Z)V",
			arg0);
	}
	void ImageView::setImageResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImageResource",
			"(I)V",
			arg0);
	}
	void ImageView::setImageURI(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setImageURI",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object());
	}
	void ImageView::setImageDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setImageDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void ImageView::setImageIcon(__jni_impl::android::graphics::drawable::Icon arg0)
	{
		__thiz.callMethod<void>(
			"setImageIcon",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.__jniObject().object());
	}
	void ImageView::setImageTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setImageTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ImageView::getImageTintList()
	{
		return __thiz.callObjectMethod(
			"getImageTintList",
			"()Landroid/content/res/ColorStateList;");
	}
	void ImageView::setImageTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setImageTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object());
	}
	void ImageView::setImageTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setImageTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ImageView::getImageTintMode()
	{
		return __thiz.callObjectMethod(
			"getImageTintMode",
			"()Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject ImageView::getImageTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getImageTintBlendMode",
			"()Landroid/graphics/BlendMode;");
	}
	void ImageView::setImageBitmap(__jni_impl::android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"setImageBitmap",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object());
	}
	void ImageView::setImageState(jintArray arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setImageState",
			"([IZ)V",
			arg0,
			arg1);
	}
	void ImageView::setImageLevel(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImageLevel",
			"(I)V",
			arg0);
	}
	void ImageView::setScaleType(__jni_impl::android::widget::ImageView_ScaleType arg0)
	{
		__thiz.callMethod<void>(
			"setScaleType",
			"(Landroid/widget/ImageView$ScaleType;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ImageView::getScaleType()
	{
		return __thiz.callObjectMethod(
			"getScaleType",
			"()Landroid/widget/ImageView$ScaleType;");
	}
	QAndroidJniObject ImageView::getImageMatrix()
	{
		return __thiz.callObjectMethod(
			"getImageMatrix",
			"()Landroid/graphics/Matrix;");
	}
	void ImageView::setImageMatrix(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"setImageMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object());
	}
	jboolean ImageView::getCropToPadding()
	{
		return __thiz.callMethod<jboolean>(
			"getCropToPadding",
			"()Z");
	}
	void ImageView::setCropToPadding(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCropToPadding",
			"(Z)V",
			arg0);
	}
	void ImageView::animateTransform(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"animateTransform",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object());
	}
	void ImageView::setBaseline(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBaseline",
			"(I)V",
			arg0);
	}
	void ImageView::setBaselineAlignBottom(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBaselineAlignBottom",
			"(Z)V",
			arg0);
	}
	jboolean ImageView::getBaselineAlignBottom()
	{
		return __thiz.callMethod<jboolean>(
			"getBaselineAlignBottom",
			"()Z");
	}
	jint ImageView::getImageAlpha()
	{
		return __thiz.callMethod<jint>(
			"getImageAlpha",
			"()I");
	}
	void ImageView::setImageAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImageAlpha",
			"(I)V",
			arg0);
	}
	QAndroidJniObject ImageView::getDrawable()
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;");
	}
	QAndroidJniObject ImageView::getColorFilter()
	{
		return __thiz.callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;");
	}
	void ImageView::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object());
	}
	void ImageView::setColorFilter(jint arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(I)V",
			arg0);
	}
	void ImageView::setColorFilter(jint arg0, __jni_impl::android::graphics::PorterDuff_Mode arg1)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ImageView : public __jni_impl::android::widget::ImageView
	{
	public:
		ImageView(QAndroidJniObject obj) { __thiz = obj; }
		ImageView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ImageView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ImageView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ImageView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_IMAGEVIEW

