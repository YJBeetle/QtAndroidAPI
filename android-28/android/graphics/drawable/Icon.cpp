#include "../../../JByteArray.hpp"
#include "../../content/Context.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../Bitmap.hpp"
#include "../PorterDuff_Mode.hpp"
#include "./Drawable.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Handler.hpp"
#include "../../os/Message.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./Icon.hpp"

namespace android::graphics::drawable
{
	// Fields
	JObject Icon::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.drawable.Icon",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Icon::TYPE_ADAPTIVE_BITMAP()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_ADAPTIVE_BITMAP"
		);
	}
	jint Icon::TYPE_BITMAP()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_BITMAP"
		);
	}
	jint Icon::TYPE_DATA()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_DATA"
		);
	}
	jint Icon::TYPE_RESOURCE()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_RESOURCE"
		);
	}
	jint Icon::TYPE_URI()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_URI"
		);
	}
	
	// Constructors
	
	// Methods
	android::graphics::drawable::Icon Icon::createWithAdaptiveBitmap(android::graphics::Bitmap arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithAdaptiveBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	android::graphics::drawable::Icon Icon::createWithBitmap(android::graphics::Bitmap arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	android::graphics::drawable::Icon Icon::createWithContentUri(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithContentUri",
			"(Landroid/net/Uri;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	android::graphics::drawable::Icon Icon::createWithContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithContentUri",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Icon;",
			arg0.object<jstring>()
		);
	}
	android::graphics::drawable::Icon Icon::createWithData(JByteArray arg0, jint arg1, jint arg2)
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
	android::graphics::drawable::Icon Icon::createWithFilePath(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithFilePath",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Icon;",
			arg0.object<jstring>()
		);
	}
	android::graphics::drawable::Icon Icon::createWithResource(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithResource",
			"(Landroid/content/Context;I)Landroid/graphics/drawable/Icon;",
			arg0.object(),
			arg1
		);
	}
	android::graphics::drawable::Icon Icon::createWithResource(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithResource",
			"(Ljava/lang/String;I)Landroid/graphics/drawable/Icon;",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint Icon::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Icon::getResId() const
	{
		return callMethod<jint>(
			"getResId",
			"()I"
		);
	}
	JString Icon::getResPackage() const
	{
		return callObjectMethod(
			"getResPackage",
			"()Ljava/lang/String;"
		);
	}
	jint Icon::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	android::net::Uri Icon::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	android::graphics::drawable::Drawable Icon::loadDrawable(android::content::Context arg0) const
	{
		return callObjectMethod(
			"loadDrawable",
			"(Landroid/content/Context;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	void Icon::loadDrawableAsync(android::content::Context arg0, android::os::Message arg1) const
	{
		callMethod<void>(
			"loadDrawableAsync",
			"(Landroid/content/Context;Landroid/os/Message;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Icon::loadDrawableAsync(android::content::Context arg0, JObject arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"loadDrawableAsync",
			"(Landroid/content/Context;Landroid/graphics/drawable/Icon$OnDrawableLoadedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::graphics::drawable::Icon Icon::setTint(jint arg0) const
	{
		return callObjectMethod(
			"setTint",
			"(I)Landroid/graphics/drawable/Icon;",
			arg0
		);
	}
	android::graphics::drawable::Icon Icon::setTintList(android::content::res::ColorStateList arg0) const
	{
		return callObjectMethod(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	android::graphics::drawable::Icon Icon::setTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		return callObjectMethod(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	JString Icon::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Icon::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics::drawable

