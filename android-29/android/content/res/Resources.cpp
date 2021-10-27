#include "./AssetFileDescriptor.hpp"
#include "./AssetManager.hpp"
#include "./ColorStateList.hpp"
#include "./Configuration.hpp"
#include "./Resources_Theme.hpp"
#include "./TypedArray.hpp"
#include "../../graphics/Movie.hpp"
#include "../../graphics/Typeface.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Bundle.hpp"
#include "../../util/DisplayMetrics.hpp"
#include "../../util/TypedValue.hpp"
#include "../../../java/io/InputStream.hpp"
#include "./Resources.hpp"

namespace android::content::res
{
	// Fields
	jint Resources::ID_NULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Resources",
			"ID_NULL"
		);
	}
	
	Resources::Resources(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Resources::Resources(android::content::res::AssetManager &arg0, android::util::DisplayMetrics &arg1, android::content::res::Configuration &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.Resources",
			"(Landroid/content/res/AssetManager;Landroid/util/DisplayMetrics;Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jint Resources::getAttributeSetSourceResId(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.content.res.Resources",
			"getAttributeSetSourceResId",
			"(Landroid/util/AttributeSet;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Resources::getSystem()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.res.Resources",
			"getSystem",
			"()Landroid/content/res/Resources;"
		);
	}
	void Resources::finishPreloading()
	{
		__thiz.callMethod<void>(
			"finishPreloading",
			"()V"
		);
	}
	void Resources::flushLayoutCache()
	{
		__thiz.callMethod<void>(
			"flushLayoutCache",
			"()V"
		);
	}
	QAndroidJniObject Resources::getAnimation(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAnimation",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	QAndroidJniObject Resources::getAssets()
	{
		return __thiz.callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	jboolean Resources::getBoolean(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(I)Z",
			arg0
		);
	}
	jint Resources::getColor(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"(I)I",
			arg0
		);
	}
	jint Resources::getColor(jint arg0, android::content::res::Resources_Theme arg1)
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"(ILandroid/content/res/Resources$Theme;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Resources::getColorStateList(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getColorStateList",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	QAndroidJniObject Resources::getColorStateList(jint arg0, android::content::res::Resources_Theme arg1)
	{
		return __thiz.callObjectMethod(
			"getColorStateList",
			"(ILandroid/content/res/Resources$Theme;)Landroid/content/res/ColorStateList;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Resources::getConfiguration()
	{
		return __thiz.callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;"
		);
	}
	jfloat Resources::getDimension(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getDimension",
			"(I)F",
			arg0
		);
	}
	jint Resources::getDimensionPixelOffset(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getDimensionPixelOffset",
			"(I)I",
			arg0
		);
	}
	jint Resources::getDimensionPixelSize(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getDimensionPixelSize",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject Resources::getDisplayMetrics()
	{
		return __thiz.callObjectMethod(
			"getDisplayMetrics",
			"()Landroid/util/DisplayMetrics;"
		);
	}
	QAndroidJniObject Resources::getDrawable(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	QAndroidJniObject Resources::getDrawable(jint arg0, android::content::res::Resources_Theme arg1)
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"(ILandroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Resources::getDrawableForDensity(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getDrawableForDensity",
			"(II)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Resources::getDrawableForDensity(jint arg0, jint arg1, android::content::res::Resources_Theme arg2)
	{
		return __thiz.callObjectMethod(
			"getDrawableForDensity",
			"(IILandroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jfloat Resources::getFloat(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	QAndroidJniObject Resources::getFont(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/Typeface;",
			arg0
		);
	}
	jfloat Resources::getFraction(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jfloat>(
			"getFraction",
			"(III)F",
			arg0,
			arg1,
			arg2
		);
	}
	jint Resources::getIdentifier(jstring arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"getIdentifier",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Resources::getIdentifier(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		return __thiz.callMethod<jint>(
			"getIdentifier",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	jintArray Resources::getIntArray(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getIntArray",
			"(I)[I",
			arg0
		).object<jintArray>();
	}
	jint Resources::getInteger(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getInteger",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject Resources::getLayout(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLayout",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	QAndroidJniObject Resources::getMovie(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getMovie",
			"(I)Landroid/graphics/Movie;",
			arg0
		);
	}
	jstring Resources::getQuantityString(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getQuantityString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Resources::getQuantityString(jint arg0, jint arg1, jobjectArray arg2)
	{
		return __thiz.callObjectMethod(
			"getQuantityString",
			"(II[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring Resources::getQuantityText(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getQuantityText",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Resources::getResourceEntryName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getResourceEntryName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getResourceName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getResourceName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getResourcePackageName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getResourcePackageName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getResourceTypeName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getResourceTypeName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getString(jint arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jarray Resources::getStringArray(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getStringArray",
			"(I)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jstring Resources::getText(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getText(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Resources::getText(jint arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jarray Resources::getTextArray(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTextArray",
			"(I)[Ljava/lang/CharSequence;",
			arg0
		).object<jarray>();
	}
	void Resources::getValue(jint arg0, android::util::TypedValue arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"getValue",
			"(ILandroid/util/TypedValue;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Resources::getValue(jstring arg0, android::util::TypedValue arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"getValue",
			"(Ljava/lang/String;Landroid/util/TypedValue;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Resources::getValue(const QString &arg0, android::util::TypedValue arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"getValue",
			"(Ljava/lang/String;Landroid/util/TypedValue;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Resources::getValueForDensity(jint arg0, jint arg1, android::util::TypedValue arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"getValueForDensity",
			"(IILandroid/util/TypedValue;Z)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject Resources::getXml(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getXml",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	QAndroidJniObject Resources::newTheme()
	{
		return __thiz.callObjectMethod(
			"newTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	QAndroidJniObject Resources::obtainAttributes(__JniBaseClass arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"obtainAttributes",
			"(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Resources::obtainTypedArray(jint arg0)
	{
		return __thiz.callObjectMethod(
			"obtainTypedArray",
			"(I)Landroid/content/res/TypedArray;",
			arg0
		);
	}
	QAndroidJniObject Resources::openRawResource(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openRawResource",
			"(I)Ljava/io/InputStream;",
			arg0
		);
	}
	QAndroidJniObject Resources::openRawResource(jint arg0, android::util::TypedValue arg1)
	{
		return __thiz.callObjectMethod(
			"openRawResource",
			"(ILandroid/util/TypedValue;)Ljava/io/InputStream;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Resources::openRawResourceFd(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openRawResourceFd",
			"(I)Landroid/content/res/AssetFileDescriptor;",
			arg0
		);
	}
	void Resources::parseBundleExtra(jstring arg0, __JniBaseClass arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"parseBundleExtra",
			"(Ljava/lang/String;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Resources::parseBundleExtra(const QString &arg0, __JniBaseClass arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"parseBundleExtra",
			"(Ljava/lang/String;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Resources::parseBundleExtras(__JniBaseClass arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"parseBundleExtras",
			"(Landroid/content/res/XmlResourceParser;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Resources::updateConfiguration(android::content::res::Configuration arg0, android::util::DisplayMetrics arg1)
	{
		__thiz.callMethod<void>(
			"updateConfiguration",
			"(Landroid/content/res/Configuration;Landroid/util/DisplayMetrics;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::content::res

