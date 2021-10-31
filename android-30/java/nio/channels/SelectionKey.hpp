#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class SelectionKey : public __JniBaseClass
	{
	public:
		// Fields
		static jint OP_ACCEPT();
		static jint OP_CONNECT();
		static jint OP_READ();
		static jint OP_WRITE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SelectionKey(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SelectionKey(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jobject attach(jobject arg0);
		jobject attachment();
		void cancel();
		java::nio::channels::SelectableChannel channel();
		jint interestOps();
		java::nio::channels::SelectionKey interestOps(jint arg0);
		jint interestOpsAnd(jint arg0);
		jint interestOpsOr(jint arg0);
		jboolean isAcceptable();
		jboolean isConnectable();
		jboolean isReadable();
		jboolean isValid();
		jboolean isWritable();
		jint readyOps();
		java::nio::channels::Selector selector();
	};
} // namespace java::nio::channels
