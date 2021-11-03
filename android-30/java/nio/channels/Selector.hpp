#pragma once

#include "../../../JObject.hpp"

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
	class Selector : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Selector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Selector(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::Selector open();
		void close();
		jboolean isOpen();
		JObject keys();
		java::nio::channels::spi::SelectorProvider provider();
		jint select();
		jint select(JObject arg0);
		jint select(jlong arg0);
		jint select(JObject arg0, jlong arg1);
		jint selectNow();
		jint selectNow(JObject arg0);
		JObject selectedKeys();
		java::nio::channels::Selector wakeup();
	};
} // namespace java::nio::channels

