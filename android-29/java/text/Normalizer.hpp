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
		
		Normalizer(QAndroidJniObject obj);
		// Constructors
		Normalizer() = default;
		
		// Methods
		static jboolean isNormalized(jstring arg0, java::text::Normalizer_Form arg1);
		static jstring normalize(jstring arg0, java::text::Normalizer_Form arg1);
	};
} // namespace java::text

