#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../SelectionKey.hpp"


namespace java::nio::channels::spi
{
	class AbstractSelectionKey : public java::nio::channels::SelectionKey
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractSelectionKey(const char *className, const char *sig, Ts...agv) : java::nio::channels::SelectionKey(className, sig, std::forward<Ts>(agv)...) {}
		AbstractSelectionKey(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void cancel();
		jboolean isValid();
	};
} // namespace java::nio::channels::spi

