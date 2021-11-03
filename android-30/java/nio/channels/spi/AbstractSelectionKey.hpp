#pragma once

#include "../SelectionKey.hpp"

namespace java::nio::channels::spi
{
	class AbstractSelectionKey : public java::nio::channels::SelectionKey
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractSelectionKey(const char *className, const char *sig, Ts...agv) : java::nio::channels::SelectionKey(className, sig, std::forward<Ts>(agv)...) {}
		AbstractSelectionKey(QJniObject obj);
		
		// Constructors
		
		// Methods
		void cancel() const;
		jboolean isValid() const;
	};
} // namespace java::nio::channels::spi

