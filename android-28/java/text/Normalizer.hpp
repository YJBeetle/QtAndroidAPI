#pragma once

#include "../../JObject.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit Normalizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Normalizer(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isNormalized(jstring arg0, java::text::Normalizer_Form arg1);
		static jstring normalize(jstring arg0, java::text::Normalizer_Form arg1);
	};
} // namespace java::text

