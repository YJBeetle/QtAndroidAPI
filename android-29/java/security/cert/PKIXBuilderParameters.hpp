#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./PKIXParameters.hpp"

namespace java::security
{
	class KeyStore;
}

namespace java::security::cert
{
	class PKIXBuilderParameters : public java::security::cert::PKIXParameters
	{
	public:
		// Fields
		
		PKIXBuilderParameters(QAndroidJniObject obj);
		// Constructors
		PKIXBuilderParameters(java::security::KeyStore &arg0, __JniBaseClass &arg1);
		PKIXBuilderParameters(__JniBaseClass &arg0, __JniBaseClass &arg1);
		PKIXBuilderParameters() = default;
		
		// Methods
		jint getMaxPathLength();
		void setMaxPathLength(jint arg0);
		jstring toString();
	};
} // namespace java::security::cert

