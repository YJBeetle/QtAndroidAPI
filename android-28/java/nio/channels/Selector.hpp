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
		void close() const;
		jboolean isOpen() const;
		JObject keys() const;
		java::nio::channels::spi::SelectorProvider provider() const;
		jint select() const;
		jint select(JObject arg0) const;
		jint select(jlong arg0) const;
		jint select(JObject arg0, jlong arg1) const;
		jint selectNow() const;
		jint selectNow(JObject arg0) const;
		JObject selectedKeys() const;
		java::nio::channels::Selector wakeup() const;
	};
} // namespace java::nio::channels

