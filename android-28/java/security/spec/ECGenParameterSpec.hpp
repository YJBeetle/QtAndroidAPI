#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::spec
{
	class ECGenParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ECGenParameterSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ECGenParameterSpec(QJniObject obj);
		
		// Constructors
		ECGenParameterSpec(jstring arg0);
		
		// Methods
	};
} // namespace java::security::spec

