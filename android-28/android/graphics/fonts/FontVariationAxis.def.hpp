#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;

namespace android::graphics::fonts
{
	class FontVariationAxis : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FontVariationAxis(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontVariationAxis(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FontVariationAxis(JString arg0, jfloat arg1);
		
		// Methods
		static JArray fromFontVariationSettings(JString arg0);
		static JString toFontVariationSettings(JArray arg0);
		jfloat getStyleValue() const;
		JString getTag() const;
		JString toString() const;
	};
} // namespace android::graphics::fonts

