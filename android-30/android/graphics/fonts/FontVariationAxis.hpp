#pragma once

#include "../../../JObject.hpp"

class JArray;
class JObject;
class JString;

namespace android::graphics::fonts
{
	class FontVariationAxis : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FontVariationAxis(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontVariationAxis(QAndroidJniObject obj);
		
		// Constructors
		FontVariationAxis(JString arg0, jfloat arg1);
		
		// Methods
		static JArray fromFontVariationSettings(JString arg0);
		static JString toFontVariationSettings(JArray arg0);
		jboolean equals(JObject arg0);
		jfloat getStyleValue();
		JString getTag();
		jint hashCode();
		JString toString();
	};
} // namespace android::graphics::fonts

