#pragma once

#include "../../JObject.hpp"

namespace android::content::res
{
	class AssetManager;
}
namespace java::io
{
	class File;
}
class JObject;
class JString;

namespace android::graphics
{
	class Typeface : public JObject
	{
	public:
		// Fields
		static jint BOLD();
		static jint BOLD_ITALIC();
		static android::graphics::Typeface DEFAULT();
		static android::graphics::Typeface DEFAULT_BOLD();
		static jint ITALIC();
		static android::graphics::Typeface MONOSPACE();
		static jint NORMAL();
		static android::graphics::Typeface SANS_SERIF();
		static android::graphics::Typeface SERIF();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Typeface(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Typeface(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Typeface create(android::graphics::Typeface arg0, jint arg1);
		static android::graphics::Typeface create(JString arg0, jint arg1);
		static android::graphics::Typeface create(android::graphics::Typeface arg0, jint arg1, jboolean arg2);
		static android::graphics::Typeface createFromAsset(android::content::res::AssetManager arg0, JString arg1);
		static android::graphics::Typeface createFromFile(java::io::File arg0);
		static android::graphics::Typeface createFromFile(JString arg0);
		static android::graphics::Typeface defaultFromStyle(jint arg0);
		jboolean equals(JObject arg0) const;
		jint getStyle() const;
		jint getWeight() const;
		jint hashCode() const;
		jboolean isBold() const;
		jboolean isItalic() const;
	};
} // namespace android::graphics

