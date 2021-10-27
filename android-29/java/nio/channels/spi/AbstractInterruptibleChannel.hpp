#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::lang
{
	class Thread;
}

namespace java::nio::channels::spi
{
	class AbstractInterruptibleChannel : public __JniBaseClass
	{
	public:
		// Fields
		
		AbstractInterruptibleChannel(QAndroidJniObject obj);
		// Constructors
		AbstractInterruptibleChannel() = default;
		
		// Methods
		void close();
		jboolean isOpen();
	};
} // namespace java::nio::channels::spi

