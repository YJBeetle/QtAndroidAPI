#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Thread;
}

namespace __jni_impl::java::util::concurrent::locks
{
	class AbstractOwnableSynchronizer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::util::concurrent::locks

#include "../../../lang/Thread.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	void AbstractOwnableSynchronizer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.AbstractOwnableSynchronizer",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::util::concurrent::locks

namespace java::util::concurrent::locks
{
	class AbstractOwnableSynchronizer : public __jni_impl::java::util::concurrent::locks::AbstractOwnableSynchronizer
	{
	public:
		AbstractOwnableSynchronizer(QAndroidJniObject obj) { __thiz = obj; }
		AbstractOwnableSynchronizer()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::locks

