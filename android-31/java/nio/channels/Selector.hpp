#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::nio::channels
{
	class SelectionKey;
}
namespace java::nio::channels::spi
{
	class SelectorProvider;
}

namespace java::nio::channels
{
	class Selector : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Selector(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Selector(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::Selector open();
		void close();
		jboolean isOpen();
		__JniBaseClass keys();
		java::nio::channels::spi::SelectorProvider provider();
		jint select();
		jint select(__JniBaseClass arg0);
		jint select(jlong arg0);
		jint select(__JniBaseClass arg0, jlong arg1);
		jint selectNow();
		jint selectNow(__JniBaseClass arg0);
		__JniBaseClass selectedKeys();
		java::nio::channels::Selector wakeup();
	};
} // namespace java::nio::channels

