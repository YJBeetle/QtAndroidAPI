#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../SelectionKey.hpp"


namespace java::nio::channels::spi
{
	class AbstractSelectionKey : public java::nio::channels::SelectionKey
	{
	public:
		// Fields
		
		AbstractSelectionKey(QAndroidJniObject obj);
		// Constructors
		AbstractSelectionKey() = default;
		
		// Methods
		void cancel();
		jboolean isValid();
	};
} // namespace java::nio::channels::spi

