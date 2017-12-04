/*=============================================================================
   Copyright (c) 2016-2017 Joel de Guzman

   Distributed under the MIT License (https://opensource.org/licenses/MIT)
=============================================================================*/
#include <photon/host.hpp>

namespace ph = photon;

namespace photon
{
   ///////////////////////////////////////////////////////////////////////////
   // Main callback
   std::function<std::unique_ptr<ph::base_view>(ph::host_view* h)> new_view =
      [](ph::host_view* h)
      {
         return std::make_unique<ph::base_view>(h);
      };

   point base_view::cursor_pos() const
   {
      return {};
   }

   point base_view::size() const
   {
      return {};
   }

   void base_view::size(point p)
   {
   }

   void base_view::refresh()
   {
   }

   void base_view::refresh(rect area)
   {
   }

   void base_view::limits(view_limits limits_, bool maintain_aspect)
   {
   }

   bool base_view::is_focus() const
   {
      return false;
   }

   cairo_t* base_view::setup_context()
   {
      return 0;
   }

   std::string clipboard()
   {
      return "";
   }

   void clipboard(std::string const& text)
   {
   }

   void set_cursor(cursor_type type)
   {
      switch (type)
      {
         case cursor_type::arrow:
            break;
         case cursor_type::ibeam:
            break;
         case cursor_type::cross_hair:
            break;
         case cursor_type::hand:
            break;
         case cursor_type::h_resize:
            break;
         case cursor_type::v_resize:
            break;
      }
   }
}

