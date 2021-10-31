#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class PBEKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PBEKeySpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PBEKeySpec(QAndroidJniObject obj);
		
		// Constructors
		PBEKeySpec(jcharArray arg0);
		PBEKeySpec(jcharArray arg0, jbyteArray arg1, jint arg2);
		PBEKeySpec(jcharArray arg0, jbyteArray arg1, jint arg2, jint arg3);
		
		// Methods
		void clearPassword();
		jint getIterationCount();
		jint getKeyLength();
		jcharArray getPassword();
		jbyteArray getSalt();
	};
} // namespace javax::crypto::spec

