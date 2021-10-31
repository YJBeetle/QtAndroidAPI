#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::res
{
	class AssetManager;
}
namespace android::graphics
{
	class Typeface;
}
namespace java::io
{
	class File;
}
namespace java::io
{
	class FileDescriptor;
}

namespace android::graphics
{
	class Typeface_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Typeface_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Typeface_Builder(QAndroidJniObject obj);
		
		// Constructors
		Typeface_Builder(java::io::File arg0);
		Typeface_Builder(java::io::FileDescriptor arg0);
		Typeface_Builder(jstring arg0);
		Typeface_Builder(android::content::res::AssetManager arg0, jstring arg1);
		
		// Methods
		android::graphics::Typeface build();
		android::graphics::Typeface_Builder setFallback(jstring arg0);
		android::graphics::Typeface_Builder setFontVariationSettings(jarray arg0);
		android::graphics::Typeface_Builder setFontVariationSettings(jstring arg0);
		android::graphics::Typeface_Builder setItalic(jboolean arg0);
		android::graphics::Typeface_Builder setTtcIndex(jint arg0);
		android::graphics::Typeface_Builder setWeight(jint arg0);
	};
} // namespace android::graphics

