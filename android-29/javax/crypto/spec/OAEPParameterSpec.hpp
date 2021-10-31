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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OAEPParameterSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		OAEPParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		OAEPParameterSpec(jstring arg0, jstring arg1, __JniBaseClass arg2, javax::crypto::spec::PSource arg3);
		
		// Methods
		jstring getDigestAlgorithm();
		jstring getMGFAlgorithm();
		QAndroidJniObject getMGFParameters();
		QAndroidJniObject getPSource();
	};
} // namespace javax::crypto::spec

