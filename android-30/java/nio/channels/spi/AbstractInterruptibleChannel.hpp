#pragma once

#include "../../../../JObject.hpp"

namespace java::lang
{
	class Thread;
}

namespace java::nio::channels::spi
{
	class AbstractInterruptibleChannel : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractInterruptibleChannel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractInterruptibleChannel(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jboolean isOpen();
	};
} // namespace java::nio::channels::spi

