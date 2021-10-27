#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::widget
{
	class ImageView_ScaleType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CENTER();
		static QAndroidJniObject CENTER_CROP();
		static QAndroidJniObject CENTER_INSIDE();
		static QAndroidJniObject FIT_CENTER();
		static QAndroidJniObject FIT_END();
		static QAndroidJniObject FIT_START();
		static QAndroidJniObject FIT_XY();
		static QAndroidJniObject MATRIX();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::widget


namespace __jni_impl::android::widget
{
	// Fields
	QAndroidJniObject ImageView_ScaleType::CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	QAndroidJniObject ImageView_ScaleType::CENTER_CROP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER_CROP",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	QAndroidJniObject ImageView_ScaleType::CENTER_INSIDE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER_INSIDE",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	QAndroidJniObject ImageView_ScaleType::FIT_CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_CENTER",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	QAndroidJniObject ImageView_ScaleType::FIT_END()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_END",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	QAndroidJniObject ImageView_ScaleType::FIT_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_START",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	QAndroidJniObject ImageView_ScaleType::FIT_XY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_XY",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	QAndroidJniObject ImageView_ScaleType::MATRIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"MATRIX",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	
	// Constructors
	void ImageView_ScaleType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageView$ScaleType",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ImageView_ScaleType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.ImageView$ScaleType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/widget/ImageView$ScaleType;",
			arg0
		);
	}
	QAndroidJniObject ImageView_ScaleType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.ImageView$ScaleType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/widget/ImageView$ScaleType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray ImageView_ScaleType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.ImageView$ScaleType",
			"values",
			"()[Landroid/widget/ImageView$ScaleType;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ImageView_ScaleType : public __jni_impl::android::widget::ImageView_ScaleType
	{
	public:
		ImageView_ScaleType(QAndroidJniObject obj) { __thiz = obj; }
		ImageView_ScaleType()
		{
			__constructor();
		}
	};
} // namespace android::widget

