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
		
		SelectionKey(QAndroidJniObject obj);
		// Constructors
		SelectionKey() = default;
		
		// Methods
		jobject attach(jobject arg0);
		jobject attachment();
		void cancel();
		QAndroidJniObject channel();
		jint interestOps();
		QAndroidJniObject interestOps(jint arg0);
		jint interestOpsAnd(jint arg0);
		jint interestOpsOr(jint arg0);
		jboolean isAcceptable();
		jboolean isConnectable();
		jboolean isReadable();
		jboolean isValid();
		jboolean isWritable();
		jint readyOps();
		QAndroidJniObject selector();
	};
} // namespace java::nio::channels

