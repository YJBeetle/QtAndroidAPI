#pragma once

#include "../../JObject.hpp"

class JString;
class JString;
namespace java::text
{
	class Normalizer_Form;
}

namespace java::text
{
	class Normalizer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Normalizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Normalizer(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jboolean isNormalized(JString arg0, java::text::Normalizer_Form arg1);
		static JString normalize(JString arg0, java::text::Normalizer_Form arg1);
	};
} // namespace java::text

