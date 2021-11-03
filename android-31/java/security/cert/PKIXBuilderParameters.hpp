#pragma once

#include "./PKIXParameters.hpp"

class JString;
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
		PKIXBuilderParameters(java::security::KeyStore arg0, JObject arg1);
		PKIXBuilderParameters(JObject arg0, JObject arg1);
		
		// Methods
		jint getMaxPathLength() const;
		void setMaxPathLength(jint arg0) const;
		JString toString() const;
	};
} // namespace java::security::cert

