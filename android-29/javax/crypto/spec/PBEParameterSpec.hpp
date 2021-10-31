#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class PBEParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PBEParameterSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PBEParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		PBEParameterSpec(jbyteArray arg0, jint arg1);
		PBEParameterSpec(jbyteArray arg0, jint arg1, __JniBaseClass arg2);
		
		// Methods
		jint getIterationCount();
		QAndroidJniObject getParameterSpec();
		jbyteArray getSalt();
	};
} // namespace javax::crypto::spec

