#pragma once

#include "../../../__JniBaseClass.hpp"

namespace javax::crypto::spec
{
	class PSource;
}

namespace javax::crypto::spec
{
	class OAEPParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DEFAULT();
		
		OAEPParameterSpec(QAndroidJniObject obj);
		// Constructors
		OAEPParameterSpec(jstring arg0, jstring arg1, __JniBaseClass arg2, javax::crypto::spec::PSource arg3);
		OAEPParameterSpec() = default;
		
		// Methods
		jstring getDigestAlgorithm();
		jstring getMGFAlgorithm();
		QAndroidJniObject getMGFParameters();
		QAndroidJniObject getPSource();
	};
} // namespace javax::crypto::spec

