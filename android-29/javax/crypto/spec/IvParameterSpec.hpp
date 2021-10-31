#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class IvParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IvParameterSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IvParameterSpec(QJniObject obj);
		
		// Constructors
		IvParameterSpec(jbyteArray arg0);
		IvParameterSpec(jbyteArray arg0, jint arg1, jint arg2);
		
		// Methods
		jbyteArray getIV();
	};
} // namespace javax::crypto::spec

