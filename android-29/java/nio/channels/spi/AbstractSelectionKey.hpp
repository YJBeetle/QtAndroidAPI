#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../SelectionKey.hpp"


namespace __jni_impl::java::nio::channels::spi
{
	class AbstractSelectionKey : public __jni_impl::java::nio::channels::SelectionKey
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void cancel();
		jboolean isValid();
	};
} // namespace __jni_impl::java::nio::channels::spi


namespace __jni_impl::java::nio::channels::spi
{
	// Fields
	
	// Constructors
	void AbstractSelectionKey::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.spi.AbstractSelectionKey",
			"(V)V");
	}
	
	// Methods
	void AbstractSelectionKey::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jboolean AbstractSelectionKey::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
} // namespace __jni_impl::java::nio::channels::spi

namespace java::nio::channels::spi
{
	class AbstractSelectionKey : public __jni_impl::java::nio::channels::spi::AbstractSelectionKey
	{
	public:
		AbstractSelectionKey(QAndroidJniObject obj) { __thiz = obj; }
		AbstractSelectionKey()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels::spi

