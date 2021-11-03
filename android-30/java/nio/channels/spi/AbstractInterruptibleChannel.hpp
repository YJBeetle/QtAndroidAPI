#pragma once

#include "../../../../JObject.hpp"

class JObject;
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
		void close() const;
		jboolean isOpen() const;
	};
} // namespace java::nio::channels::spi

