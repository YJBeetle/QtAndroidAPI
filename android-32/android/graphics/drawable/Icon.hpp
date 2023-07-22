#pragma once

#include "../../../JByteArray.hpp"
#include "../../content/Context.def.hpp"
#include "../../content/res/ColorStateList.def.hpp"
#include "../Bitmap.def.hpp"
#include "../BlendMode.def.hpp"
#include "../PorterDuff_Mode.def.hpp"
#include "./Drawable.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Handler.def.hpp"
#include "../../os/Message.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./Icon.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	inline JObject Icon::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.drawable.Icon",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Icon::TYPE_ADAPTIVE_BITMAP()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_ADAPTIVE_BITMAP"
		);
	}
	inline jint Icon::TYPE_BITMAP()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_BITMAP"
		);
	}
	inline jint Icon::TYPE_DATA()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_DATA"
		);
	}
	inline jint Icon::TYPE_RESOURCE()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_RESOURCE"
		);
	}
	inline jint Icon::TYPE_URI()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_URI"
		);
	}
	inline jint Icon::TYPE_URI_ADAPTIVE_BITMAP()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_URI_ADAPTIVE_BITMAP"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::drawable::Icon Icon::createWithAdaptiveBitmap(android::graphics::Bitmap arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithAdaptiveBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Icon Icon::createWithAdaptiveBitmapContentUri(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithAdaptiveBitmapContentUri",
			"(Landroid/net/Uri;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Icon Icon::createWithAdaptiveBitmapContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithAdaptiveBitmapContentUri",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Icon;",
			arg0.object<jstring>()
		);
	}
	inline android::graphics::drawable::Icon Icon::createWithBitmap(android::graphics::Bitmap arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Icon Icon::createWithContentUri(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithContentUri",
			"(Landroid/net/Uri;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Icon Icon::createWithContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithContentUri",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Icon;",
			arg0.object<jstring>()
		);
	}
	inline android::graphics::drawable::Icon Icon::createWithData(JByteArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithData",
			"([BII)Landroid/graphics/drawable/Icon;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline android::graphics::drawable::Icon Icon::createWithFilePath(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithFilePath",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Icon;",
			arg0.object<jstring>()
		);
	}
	inline android::graphics::drawable::Icon Icon::createWithResource(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithResource",
			"(Landroid/content/Context;I)Landroid/graphics/drawable/Icon;",
			arg0.object(),
			arg1
		);
	}
	inline android::graphics::drawable::Icon Icon::createWithResource(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithResource",
			"(Ljava/lang/String;I)Landroid/graphics/drawable/Icon;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint Icon::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint Icon::getResId() const
	{
		return callMethod<jint>(
			"getResId",
			"()I"
		);
	}
	inline JString Icon::getResPackage() const
	{
		return callObjectMethod(
			"getResPackage",
			"()Ljava/lang/String;"
		);
	}
	inline jint Icon::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline android::net::Uri Icon::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	inline android::graphics::drawable::Drawable Icon::loadDrawable(android::content::Context arg0) const
	{
		return callObjectMethod(
			"loadDrawable",
			"(Landroid/content/Context;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline void Icon::loadDrawableAsync(android::content::Context arg0, android::os::Message arg1) const
	{
		callMethod<void>(
			"loadDrawableAsync",
			"(Landroid/content/Context;Landroid/os/Message;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Icon::loadDrawableAsync(android::content::Context arg0, JObject arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"loadDrawableAsync",
			"(Landroid/content/Context;Landroid/graphics/drawable/Icon$OnDrawableLoadedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::graphics::drawable::Icon Icon::setTint(jint arg0) const
	{
		return callObjectMethod(
			"setTint",
			"(I)Landroid/graphics/drawable/Icon;",
			arg0
		);
	}
	inline android::graphics::drawable::Icon Icon::setTintBlendMode(android::graphics::BlendMode arg0) const
	{
		return callObjectMethod(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Icon Icon::setTintList(android::content::res::ColorStateList arg0) const
	{
		return callObjectMethod(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Icon Icon::setTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		return callObjectMethod(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	inline JString Icon::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Icon::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics::drawable

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::drawable;
#endif
