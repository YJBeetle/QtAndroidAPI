#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::graphics::drawable
{
	class Icon : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint TYPE_ADAPTIVE_BITMAP();
		static jint TYPE_BITMAP();
		static jint TYPE_DATA();
		static jint TYPE_RESOURCE();
		static jint TYPE_URI();
		
		Icon(QAndroidJniObject obj);
		// Constructors
		Icon() = default;
		
		// Methods
		static QAndroidJniObject createWithAdaptiveBitmap(android::graphics::Bitmap arg0);
		static QAndroidJniObject createWithBitmap(android::graphics::Bitmap arg0);
		static QAndroidJniObject createWithContentUri(android::net::Uri arg0);
		static QAndroidJniObject createWithContentUri(jstring arg0);
		static QAndroidJniObject createWithContentUri(const QString &arg0);
		static QAndroidJniObject createWithData(jbyteArray arg0, jint arg1, jint arg2);
		static QAndroidJniObject createWithFilePath(jstring arg0);
		static QAndroidJniObject createWithFilePath(const QString &arg0);
		static QAndroidJniObject createWithResource(android::content::Context arg0, jint arg1);
		static QAndroidJniObject createWithResource(jstring arg0, jint arg1);
		static QAndroidJniObject createWithResource(const QString &arg0, jint arg1);
		jint describeContents();
		jint getResId();
		jstring getResPackage();
		jint getType();
		QAndroidJniObject getUri();
		QAndroidJniObject loadDrawable(android::content::Context arg0);
		void loadDrawableAsync(android::content::Context arg0, android::os::Message arg1);
		void loadDrawableAsync(android::content::Context arg0, __JniBaseClass arg1, android::os::Handler arg2);
		QAndroidJniObject setTint(jint arg0);
		QAndroidJniObject setTintBlendMode(android::graphics::BlendMode arg0);
		QAndroidJniObject setTintList(android::content::res::ColorStateList arg0);
		QAndroidJniObject setTintMode(android::graphics::PorterDuff_Mode arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::graphics::drawable

