#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class PSource : public __JniBaseClass
	{
	public:
		// Fields
		
		PSource(QAndroidJniObject obj);
		// Constructors
		PSource() = default;
		
		// Methods
		jstring getAlgorithm();
	};
} // namespace javax::crypto::spec

