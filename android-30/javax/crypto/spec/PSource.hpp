#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class PSource : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PSource(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PSource(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getAlgorithm();
	};
} // namespace javax::crypto::spec

