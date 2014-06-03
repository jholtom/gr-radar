/* -*- c++ -*- */
/* 
 * Copyright 2014 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_RADAR_SIGNAL_GENERATOR_SYNC_PULSE_C_H
#define INCLUDED_RADAR_SIGNAL_GENERATOR_SYNC_PULSE_C_H

#include <radar/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace radar {

    /*!
     * \brief <+description of block+>
     * \ingroup radar
     *
     */
    class RADAR_API signal_generator_sync_pulse_c : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<signal_generator_sync_pulse_c> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of radar::signal_generator_sync_pulse_c.
       *
       * To avoid accidental use of raw pointers, radar::signal_generator_sync_pulse_c's
       * constructor is in a private implementation
       * class. radar::signal_generator_sync_pulse_c::make is the public interface for
       * creating new instances.
       */
      static sptr make(int packet_len, std::vector<int> pulse_len, std::vector<int> pulse_pause, float pulse_amplitude, const std::string len_key="packet_len");
    };

  } // namespace radar
} // namespace gr

#endif /* INCLUDED_RADAR_SIGNAL_GENERATOR_SYNC_PULSE_C_H */
