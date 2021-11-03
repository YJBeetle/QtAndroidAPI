#pragma once

#include "../../../JObject.hpp"


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
		
		// QJniObject forward
		template<typename ...Ts> explicit FontStyle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontStyle(QJniObject obj);
		
		// Constructors
		FontStyle();
		FontStyle(jint arg0, jint arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getSlant();
		jint getWeight();
		jint hashCode();
		jstring toString();
	};
} // namespace android::graphics::fonts

