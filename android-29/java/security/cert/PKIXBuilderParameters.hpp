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
		
		// QJniObject forward
		template<typename ...Ts> explicit PKIXBuilderParameters(const char *className, const char *sig, Ts...agv) : java::security::cert::PKIXParameters(className, sig, std::forward<Ts>(agv)...) {}
		PKIXBuilderParameters(QJniObject obj);
		
		// Constructors
		PKIXBuilderParameters(java::security::KeyStore arg0, __JniBaseClass arg1);
		PKIXBuilderParameters(__JniBaseClass arg0, __JniBaseClass arg1);
		
		// Methods
		jint getMaxPathLength();
		void setMaxPathLength(jint arg0);
		jstring toString();
	};
} // namespace java::security::cert

