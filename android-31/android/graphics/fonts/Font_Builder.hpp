#pragma once

#include "../../../JObject.hpp"

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
	class Font_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Font_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Font_Builder(QAndroidJniObject obj);
		
		// Constructors
		Font_Builder(android::graphics::fonts::Font arg0);
		Font_Builder(android::os::ParcelFileDescriptor arg0);
		Font_Builder(java::io::File arg0);
		Font_Builder(java::nio::ByteBuffer arg0);
		Font_Builder(android::content::res::AssetManager arg0, jstring arg1);
		Font_Builder(android::content::res::Resources arg0, jint arg1);
		Font_Builder(android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2);
		
		// Methods
		android::graphics::fonts::Font build();
		android::graphics::fonts::Font_Builder setFontVariationSettings(jarray arg0);
		android::graphics::fonts::Font_Builder setFontVariationSettings(jstring arg0);
		android::graphics::fonts::Font_Builder setSlant(jint arg0);
		android::graphics::fonts::Font_Builder setTtcIndex(jint arg0);
		android::graphics::fonts::Font_Builder setWeight(jint arg0);
	};
} // namespace android::graphics::fonts

