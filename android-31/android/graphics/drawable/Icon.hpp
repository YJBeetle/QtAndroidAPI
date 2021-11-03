#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class BlendMode;
}
namespace android::graphics
{
	class PorterDuff_Mode;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Message;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::graphics::drawable
{
	class Icon : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TYPE_ADAPTIVE_BITMAP();
		static jint TYPE_BITMAP();
		static jint TYPE_DATA();
		static jint TYPE_RESOURCE();
		static jint TYPE_URI();
		static jint TYPE_URI_ADAPTIVE_BITMAP();
		
		// QJniObject forward
		template<typename ...Ts> explicit Icon(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Icon(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::drawable::Icon createWithAdaptiveBitmap(android::graphics::Bitmap arg0);
		static android::graphics::drawable::Icon createWithAdaptiveBitmapContentUri(android::net::Uri arg0);
		static android::graphics::drawable::Icon createWithAdaptiveBitmapContentUri(JString arg0);
		static android::graphics::drawable::Icon createWithBitmap(android::graphics::Bitmap arg0);
		static android::graphics::drawable::Icon createWithContentUri(android::net::Uri arg0);
		static android::graphics::drawable::Icon createWithContentUri(JString arg0);
		static android::graphics::drawable::Icon createWithData(JByteArray arg0, jint arg1, jint arg2);
		static android::graphics::drawable::Icon createWithFilePath(JString arg0);
		static android::graphics::drawable::Icon createWithResource(android::content::Context arg0, jint arg1);
		static android::graphics::drawable::Icon createWithResource(JString arg0, jint arg1);
		jint describeContents() const;
		jint getResId() const;
		JString getResPackage() const;
		jint getType() const;
		android::net::Uri getUri() const;
		android::graphics::drawable::Drawable loadDrawable(android::content::Context arg0) const;
		void loadDrawableAsync(android::content::Context arg0, android::os::Message arg1) const;
		void loadDrawableAsync(android::content::Context arg0, JObject arg1, android::os::Handler arg2) const;
		android::graphics::drawable::Icon setTint(jint arg0) const;
		android::graphics::drawable::Icon setTintBlendMode(android::graphics::BlendMode arg0) const;
		android::graphics::drawable::Icon setTintList(android::content::res::ColorStateList arg0) const;
		android::graphics::drawable::Icon setTintMode(android::graphics::PorterDuff_Mode arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics::drawable

