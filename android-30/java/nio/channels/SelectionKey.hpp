#pragma once

#include "../../../JObject.hpp"

class JObject;
namespace java::nio::channels
{
	class SelectableChannel;
}
namespace java::nio::channels
{
	class Selector;
}

namespace java::nio::channels
{
	class SelectionKey : public JObject
	{
	public:
		// Fields
		static jint OP_ACCEPT();
		static jint OP_CONNECT();
		static jint OP_READ();
		static jint OP_WRITE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SelectionKey(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SelectionKey(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject attach(JObject arg0) const;
		JObject attachment() const;
		void cancel() const;
		java::nio::channels::SelectableChannel channel() const;
		jint interestOps() const;
		java::nio::channels::SelectionKey interestOps(jint arg0) const;
		jint interestOpsAnd(jint arg0) const;
		jint interestOpsOr(jint arg0) const;
		jboolean isAcceptable() const;
		jboolean isConnectable() const;
		jboolean isReadable() const;
		jboolean isValid() const;
		jboolean isWritable() const;
		jint readyOps() const;
		java::nio::channels::Selector selector() const;
	};
} // namespace java::nio::channels

