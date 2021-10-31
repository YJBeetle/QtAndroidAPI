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
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractInterruptibleChannel(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AbstractInterruptibleChannel(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jboolean isOpen();
	};
} // namespace java::nio::channels::spi

