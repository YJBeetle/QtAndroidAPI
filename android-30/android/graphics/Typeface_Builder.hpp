#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JString;

namespace android::graphics
{
	class Typeface_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Typeface_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Typeface_Builder(QJniObject obj);
		
		// Constructors
		Typeface_Builder(java::io::File arg0);
		Typeface_Builder(java::io::FileDescriptor arg0);
		Typeface_Builder(JString arg0);
		Typeface_Builder(android::content::res::AssetManager arg0, JString arg1);
		
		// Methods
		android::graphics::Typeface build() const;
		android::graphics::Typeface_Builder setFallback(JString arg0) const;
		android::graphics::Typeface_Builder setFontVariationSettings(JArray arg0) const;
		android::graphics::Typeface_Builder setFontVariationSettings(JString arg0) const;
		android::graphics::Typeface_Builder setItalic(jboolean arg0) const;
		android::graphics::Typeface_Builder setTtcIndex(jint arg0) const;
		android::graphics::Typeface_Builder setWeight(jint arg0) const;
	};
} // namespace android::graphics

