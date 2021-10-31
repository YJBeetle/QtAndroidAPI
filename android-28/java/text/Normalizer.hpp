#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::text
{
	class Normalizer_Form;
}

namespace java::text
{
	class Normalizer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Normalizer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Normalizer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isNormalized(jstring arg0, java::text::Normalizer_Form arg1);
		static jstring normalize(jstring arg0, java::text::Normalizer_Form arg1);
	};
} // namespace java::text

