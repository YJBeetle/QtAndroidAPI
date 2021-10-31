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
		static javax::crypto::spec::OAEPParameterSpec DEFAULT();
		
		// QJniObject forward
		template<typename ...Ts> explicit OAEPParameterSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		OAEPParameterSpec(QJniObject obj);
		
		// Constructors
		OAEPParameterSpec(jstring arg0, jstring arg1, __JniBaseClass arg2, javax::crypto::spec::PSource arg3);
		
		// Methods
		jstring getDigestAlgorithm();
		jstring getMGFAlgorithm();
		__JniBaseClass getMGFParameters();
		javax::crypto::spec::PSource getPSource();
	};
} // namespace javax::crypto::spec

