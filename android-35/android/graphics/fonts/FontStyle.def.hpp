#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::graphics::fonts
{
	class FontStyle : public JObject
	{
	public:
		// Fields
		static jint FONT_SLANT_ITALIC();
		static jint FONT_SLANT_UPRIGHT();
		static jint FONT_WEIGHT_BLACK();
		static jint FONT_WEIGHT_BOLD();
		static jint FONT_WEIGHT_EXTRA_BOLD();
		static jint FONT_WEIGHT_EXTRA_LIGHT();
		static jint FONT_WEIGHT_LIGHT();
		static jint FONT_WEIGHT_MAX();
		static jint FONT_WEIGHT_MEDIUM();
		static jint FONT_WEIGHT_MIN();
		static jint FONT_WEIGHT_NORMAL();
		static jint FONT_WEIGHT_SEMI_BOLD();
		static jint FONT_WEIGHT_THIN();
		static jint FONT_WEIGHT_UNSPECIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit FontStyle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontStyle(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FontStyle();
		FontStyle(jint arg0, jint arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getSlant() const;
		jint getWeight() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::graphics::fonts

