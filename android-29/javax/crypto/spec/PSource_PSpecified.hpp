#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./PSource.hpp"


namespace javax::crypto::spec
{
	class PSource_PSpecified : public javax::crypto::spec::PSource
	{
	public:
		// Fields
		static QAndroidJniObject DEFAULT();
		
		PSource_PSpecified(QAndroidJniObject obj);
		// Constructors
		PSource_PSpecified(jbyteArray &arg0);
		PSource_PSpecified() = default;
		
		// Methods
		jbyteArray getValue();
	};
} // namespace javax::crypto::spec

