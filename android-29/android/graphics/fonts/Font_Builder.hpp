#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::res
{
	class AssetManager;
}
namespace android::content::res
{
	class Resources;
}
namespace android::graphics::fonts
{
	class Font;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace java::io
{
	class File;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::graphics::fonts
{
	class Font_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Font_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Font_Builder(QAndroidJniObject obj);
		
		// Constructors
		Font_Builder(android::os::ParcelFileDescriptor arg0);
		Font_Builder(java::io::File arg0);
		Font_Builder(java::nio::ByteBuffer arg0);
		Font_Builder(android::content::res::AssetManager arg0, jstring arg1);
		Font_Builder(android::content::res::Resources arg0, jint arg1);
		Font_Builder(android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setFontVariationSettings(jarray arg0);
		QAndroidJniObject setFontVariationSettings(jstring arg0);
		QAndroidJniObject setSlant(jint arg0);
		QAndroidJniObject setTtcIndex(jint arg0);
		QAndroidJniObject setWeight(jint arg0);
	};
} // namespace android::graphics::fonts

